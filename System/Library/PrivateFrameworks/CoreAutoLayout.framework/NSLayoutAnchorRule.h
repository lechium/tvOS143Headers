/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSString, NSLayoutAnchor;

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule> {

	NSLayoutAnchor* _firstAnchor;
	NSLayoutAnchor* _secondAnchor;
	long long _relation;
	NSString* _identifier;
	double _constant;
	double _multiplier;
	float _priority;

}

@property (copy,readonly) NSLayoutAnchor * firstAnchor;               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (copy,readonly) NSLayoutAnchor * secondAnchor;              //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (readonly) long long relation;                              //@synthesize relation=_relation - In the implementation block
@property (readonly) double constant;                                 //@synthesize constant=_constant - In the implementation block
@property (readonly) double multiplier;                               //@synthesize multiplier=_multiplier - In the implementation block
@property (readonly) float priority;                                  //@synthesize priority=_priority - In the implementation block
@property (copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSString *)identifier;
-(float)priority;
-(double)constant;
-(double)multiplier;
-(long long)relation;
-(NSLayoutAnchor *)firstAnchor;
-(NSLayoutAnchor *)secondAnchor;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(id)makeLayoutConstraint;
@end

