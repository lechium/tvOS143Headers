/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {

	NSPredicate* _predicate;
	NSExpression* _trueExpression;
	NSExpression* _falseExpression;

}
+(BOOL)supportsSecureCoding;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)allowEvaluation;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
-(id)predicate;
-(id)trueExpression;
-(id)falseExpression;
@end

