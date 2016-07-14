#ifndef _DECISION_NODE_H_
#define _DECISION_NODE_H_

#define BOARD_WIDTH (20)
#define BOARD_HEIGHT (10)

namespace genetic {
enum ComparisonType { LESS_THAN, EQUAL_TO, GREATER_THAN };
class DecisionNode {
public:

        virtual void Execute();
        DecisionNode();
        // void setComparison(ComparisonType &comparisonType, )

private:
};
}
#endif /* ifndef _STRATEGY_H_ */
