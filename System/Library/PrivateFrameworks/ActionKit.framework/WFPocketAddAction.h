/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, NSError, NSString;

@interface WFPocketAddAction : WFAction <PocketAPIDelegate> {

	NSObject*<OS_dispatch_group> _addGroup;
	NSError* _lastError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> addGroup;              //@synthesize addGroup=_addGroup - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                //@synthesize lastError=_lastError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)lastError;
-(void)setLastError:(NSError *)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4 ;
-(void)finishRunningWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)addGroup;
-(void)setAddGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

