/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAccessResource.h>

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource {

	id _observer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,copy,readonly) NSArray * accounts; 
-(id)name;
-(void)dealloc;
-(id)username;
-(NSArray *)accounts;
-(id)resourceName;
-(Class)accountClass;
-(unsigned long long)globalLevelStatus;
-(id)initWithDefinition:(id)arg1 ;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canLogOut;
-(void)logOut;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)makeAvailableAtGlobalLevelWithWebAuthenticationSessionInUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)settingsUIDefinition;
@end
