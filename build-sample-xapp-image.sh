#!/bin/sh
# call as setup-sample-xapp.sh gnb_id

set -x

# default IPs and ports
RIC_SUBNET=10.0.2.0/24
RIC_IP=10.0.2.1
E2TERM_IP=10.0.2.10
E2TERM_SCTP_PORT=36422
E2MGR_IP=10.0.2.11
DBAAS_IP=10.0.2.12
DBAAS_PORT=6379
E2RTMANSIM_IP=10.0.2.15
XAPP_IP=10.0.2.24  # generic xApp IP

# default image names
IMAGE_NAME=sample-xapp
MODEL_DIR=sample-xapp
CONNECTOR_DIR=xapp-sm-connector
DOCKER_FILE=Dockerfile_oai_xapp

ENTRYPOINT=/bin/bash
GNB_ID=$1

# if changing xApp IP or ID, you need to define new RMR routes
# in the setup-ric.sh/setup-lib.sh scripts and restart the RIC
XAPP_IP=$XAPP_IP
XAPP_ID=$(echo $XAPP_IP | cut -d "." -f 4)

CONTAINER_NAME=${IMAGE_NAME}-${XAPP_ID}

# Build docker image
docker build  \
    --build-arg DBAAS_SERVICE_HOST=$DBAAS_IP \
    --build-arg DBAAS_SERVICE_PORT=$DBAAS_PORT \
    -f ${DOCKER_FILE} -t ${IMAGE_NAME}:latest .

