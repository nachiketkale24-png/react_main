function mainContainer(reactElement, container) {
    const domElement = document.createElement(reactElement.type)
    domElement.innerHTML = reactElement
    
}



const rectElement = {
    type : 'a',
    props: {
        href : 'https://www.google.com',
        target : '_blank'
    },
    chilren : 'click me to visit google'
}

const mainContainer = document.querySelector('#root')

customeElement(reactElement, mainContainer)