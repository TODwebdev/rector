<?php

namespace SomeNamespace;

class SomeTestCase
{
    /**
     * @return Synapse|\PHPUnit_Framework_MockObject_MockObject
     */
    public function getSynapseMock(int $output = 2): \PHPUnit_Framework_MockObject_MockObject
    {
    }
}

?>
-----
<?php

namespace SomeNamespace;

class SomeTestCase
{
    /**
     * @return Synapse|\PHPUnit_Framework_MockObject_MockObject
     */
    public function getSynapseMock(int $output = 2): \PHPUnit_Framework_MockObject_MockObject
    {
    }
}

?>
