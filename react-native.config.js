// https://github.com/react-native-community/cli/blob/main/docs/dependencies.md

const path = require('path')

module.exports = {
  dependency: {
    platforms: {
      ios: {
        // Help autolinking find the podspec when using file:../ or symlinked installs.
        podspecPath: path.join(__dirname, 'MultipleImagePicker.podspec'),
      },
      android: {
        sourceDir: path.join(__dirname, 'android'),
      },
    },
  },
}
