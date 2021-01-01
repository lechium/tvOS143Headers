/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>
+(BOOL)isSingleton;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
@end

