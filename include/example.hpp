#pragma once

/** 
 * @class Example
 * @brief Example class to show how header files and class files should be organized
 */
class Example {
    private:
        int x;
    public:
        Example();

        /**
         * @brief Called every update frame.
         */
        void update();

        /**
         * @brief Called every draw frame.
         */
        void draw();

        /**
         * @brief Prints the example's attributes to console.
         */
        void print();
};