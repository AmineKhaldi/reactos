#!/bin/sh
set -e
echo 'Performing the git commit'
git commit -m "Deploy code docs to GitHub Pages Travis build: ${TRAVIS_BUILD_NUMBER}" -m "Commit: ${TRAVIS_COMMIT}" > /dev/null 2>&1
echo 'Performing the git push'
git push --force --quiet "https://${GH_REPO_TOKEN}@${GH_REPO_REF}" > /dev/null 2>&1
