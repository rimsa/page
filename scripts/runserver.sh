#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 [Address]";
    echo "   Ex.: $0 localhost:8080";
    exit 1;
fi

path="$(dirname $0)/..";
host="$1";

php -S "$host" -t "$path";
