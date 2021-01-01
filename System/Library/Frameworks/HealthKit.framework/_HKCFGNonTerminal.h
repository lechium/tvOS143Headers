/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKCFGExpression.h>

@class NSString, NSMutableArray, NSCharacterSet;

@interface _HKCFGNonTerminal : _HKCFGExpression {

	NSString* _label;
	NSMutableArray* _replacementRules;
	NSCharacterSet* _charactersToBeSkipped;

}

@property (nonatomic,copy) NSCharacterSet * charactersToBeSkipped;              //@synthesize charactersToBeSkipped=_charactersToBeSkipped - In the implementation block
+(id)nonTerminalWithLabel:(id)arg1 ;
-(void)_invalidate;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(id)_label;
-(id)initWithLabel:(id)arg1 ;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(unsigned long long)_minimumLength;
-(BOOL)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(/*^block*/id)arg4 ;
-(void)_checkForCycles:(id)arg1 ;
-(void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(/*^block*/id)arg2 ;
-(id)_parseTreeWithContext:(id)arg1 ;
-(id)_replacementRules;
-(void)_checkForCycles;
@end

