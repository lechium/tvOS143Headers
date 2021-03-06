/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTTreatmentAction.h>

@class NSString, NSDictionary;

@interface MTURLDeresAction : MTTreatmentAction {

	NSString* _scope;
	NSDictionary* _allowedParams;

}

@property (nonatomic,retain) NSString * scope;                          //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSDictionary * allowedParams;              //@synthesize allowedParams=_allowedParams - In the implementation block
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(id)performAction:(id)arg1 context:(id)arg2 ;
-(void)setAllowedParams:(NSDictionary *)arg1 ;
-(id)allowedQueryItemsFromItems:(id)arg1 ;
-(NSDictionary *)allowedParams;
@end

