// Generated from crule.g4 by ANTLR 4.9
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link cruleParser}.
 */
public interface cruleListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link cruleParser#crl}.
	 * @param ctx the parse tree
	 */
	void enterCrl(cruleParser.CrlContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#crl}.
	 * @param ctx the parse tree
	 */
	void exitCrl(cruleParser.CrlContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#ruleEntry}.
	 * @param ctx the parse tree
	 */
	void enterRuleEntry(cruleParser.RuleEntryContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#ruleEntry}.
	 * @param ctx the parse tree
	 */
	void exitRuleEntry(cruleParser.RuleEntryContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#salience}.
	 * @param ctx the parse tree
	 */
	void enterSalience(cruleParser.SalienceContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#salience}.
	 * @param ctx the parse tree
	 */
	void exitSalience(cruleParser.SalienceContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#ruleName}.
	 * @param ctx the parse tree
	 */
	void enterRuleName(cruleParser.RuleNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#ruleName}.
	 * @param ctx the parse tree
	 */
	void exitRuleName(cruleParser.RuleNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#ruleDescription}.
	 * @param ctx the parse tree
	 */
	void enterRuleDescription(cruleParser.RuleDescriptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#ruleDescription}.
	 * @param ctx the parse tree
	 */
	void exitRuleDescription(cruleParser.RuleDescriptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#ifScope}.
	 * @param ctx the parse tree
	 */
	void enterIfScope(cruleParser.IfScopeContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#ifScope}.
	 * @param ctx the parse tree
	 */
	void exitIfScope(cruleParser.IfScopeContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#thenScope}.
	 * @param ctx the parse tree
	 */
	void enterThenScope(cruleParser.ThenScopeContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#thenScope}.
	 * @param ctx the parse tree
	 */
	void exitThenScope(cruleParser.ThenScopeContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#thenExpressionList}.
	 * @param ctx the parse tree
	 */
	void enterThenExpressionList(cruleParser.ThenExpressionListContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#thenExpressionList}.
	 * @param ctx the parse tree
	 */
	void exitThenExpressionList(cruleParser.ThenExpressionListContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#thenExpression}.
	 * @param ctx the parse tree
	 */
	void enterThenExpression(cruleParser.ThenExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#thenExpression}.
	 * @param ctx the parse tree
	 */
	void exitThenExpression(cruleParser.ThenExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(cruleParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(cruleParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(cruleParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(cruleParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#mulDivOperators}.
	 * @param ctx the parse tree
	 */
	void enterMulDivOperators(cruleParser.MulDivOperatorsContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#mulDivOperators}.
	 * @param ctx the parse tree
	 */
	void exitMulDivOperators(cruleParser.MulDivOperatorsContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#addMinusOperators}.
	 * @param ctx the parse tree
	 */
	void enterAddMinusOperators(cruleParser.AddMinusOperatorsContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#addMinusOperators}.
	 * @param ctx the parse tree
	 */
	void exitAddMinusOperators(cruleParser.AddMinusOperatorsContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#comparisonOperator}.
	 * @param ctx the parse tree
	 */
	void enterComparisonOperator(cruleParser.ComparisonOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#comparisonOperator}.
	 * @param ctx the parse tree
	 */
	void exitComparisonOperator(cruleParser.ComparisonOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#andLogicOperator}.
	 * @param ctx the parse tree
	 */
	void enterAndLogicOperator(cruleParser.AndLogicOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#andLogicOperator}.
	 * @param ctx the parse tree
	 */
	void exitAndLogicOperator(cruleParser.AndLogicOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#orLogicOperator}.
	 * @param ctx the parse tree
	 */
	void enterOrLogicOperator(cruleParser.OrLogicOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#orLogicOperator}.
	 * @param ctx the parse tree
	 */
	void exitOrLogicOperator(cruleParser.OrLogicOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#expressionAtom}.
	 * @param ctx the parse tree
	 */
	void enterExpressionAtom(cruleParser.ExpressionAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#expressionAtom}.
	 * @param ctx the parse tree
	 */
	void exitExpressionAtom(cruleParser.ExpressionAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#constant}.
	 * @param ctx the parse tree
	 */
	void enterConstant(cruleParser.ConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#constant}.
	 * @param ctx the parse tree
	 */
	void exitConstant(cruleParser.ConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariable(cruleParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariable(cruleParser.VariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#arrayMapSelector}.
	 * @param ctx the parse tree
	 */
	void enterArrayMapSelector(cruleParser.ArrayMapSelectorContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#arrayMapSelector}.
	 * @param ctx the parse tree
	 */
	void exitArrayMapSelector(cruleParser.ArrayMapSelectorContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#memberVariable}.
	 * @param ctx the parse tree
	 */
	void enterMemberVariable(cruleParser.MemberVariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#memberVariable}.
	 * @param ctx the parse tree
	 */
	void exitMemberVariable(cruleParser.MemberVariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall(cruleParser.FunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall(cruleParser.FunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#methodCall}.
	 * @param ctx the parse tree
	 */
	void enterMethodCall(cruleParser.MethodCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#methodCall}.
	 * @param ctx the parse tree
	 */
	void exitMethodCall(cruleParser.MethodCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void enterArgumentList(cruleParser.ArgumentListContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void exitArgumentList(cruleParser.ArgumentListContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#floatLiteral}.
	 * @param ctx the parse tree
	 */
	void enterFloatLiteral(cruleParser.FloatLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#floatLiteral}.
	 * @param ctx the parse tree
	 */
	void exitFloatLiteral(cruleParser.FloatLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#decimalFloatLiteral}.
	 * @param ctx the parse tree
	 */
	void enterDecimalFloatLiteral(cruleParser.DecimalFloatLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#decimalFloatLiteral}.
	 * @param ctx the parse tree
	 */
	void exitDecimalFloatLiteral(cruleParser.DecimalFloatLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#hexadecimalFloatLiteral}.
	 * @param ctx the parse tree
	 */
	void enterHexadecimalFloatLiteral(cruleParser.HexadecimalFloatLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#hexadecimalFloatLiteral}.
	 * @param ctx the parse tree
	 */
	void exitHexadecimalFloatLiteral(cruleParser.HexadecimalFloatLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#integerLiteral}.
	 * @param ctx the parse tree
	 */
	void enterIntegerLiteral(cruleParser.IntegerLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#integerLiteral}.
	 * @param ctx the parse tree
	 */
	void exitIntegerLiteral(cruleParser.IntegerLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#decimalLiteral}.
	 * @param ctx the parse tree
	 */
	void enterDecimalLiteral(cruleParser.DecimalLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#decimalLiteral}.
	 * @param ctx the parse tree
	 */
	void exitDecimalLiteral(cruleParser.DecimalLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#hexadecimalLiteral}.
	 * @param ctx the parse tree
	 */
	void enterHexadecimalLiteral(cruleParser.HexadecimalLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#hexadecimalLiteral}.
	 * @param ctx the parse tree
	 */
	void exitHexadecimalLiteral(cruleParser.HexadecimalLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#octalLiteral}.
	 * @param ctx the parse tree
	 */
	void enterOctalLiteral(cruleParser.OctalLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#octalLiteral}.
	 * @param ctx the parse tree
	 */
	void exitOctalLiteral(cruleParser.OctalLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void enterStringLiteral(cruleParser.StringLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void exitStringLiteral(cruleParser.StringLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link cruleParser#booleanLiteral}.
	 * @param ctx the parse tree
	 */
	void enterBooleanLiteral(cruleParser.BooleanLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link cruleParser#booleanLiteral}.
	 * @param ctx the parse tree
	 */
	void exitBooleanLiteral(cruleParser.BooleanLiteralContext ctx);
}