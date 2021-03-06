/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSCompoundPredicate, NSMutableDictionary;

@interface IAMDecomposedKey : NSObject {

	NSMutableArray* rawPredicateConditions;
	NSCompoundPredicate* compoundPredicate;
	BOOL compoundPredicateNeedsInitialization;
	NSMutableDictionary* _ruleDestructuredIdentifiers;

}

@property (nonatomic,retain) NSMutableDictionary * ruleDestructuredIdentifiers;              //@synthesize ruleDestructuredIdentifiers=_ruleDestructuredIdentifiers - In the implementation block
-(id)init;
-(void)setRuleDestructuredIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)constructCompoundPredicateIfNeeded;
-(void)addPredicateCondition:(id)arg1 ;
-(BOOL)hasPredicates;
-(BOOL)predicatesMatchFigaroEventProperties:(id)arg1 ;
-(NSMutableDictionary *)ruleDestructuredIdentifiers;
@end

