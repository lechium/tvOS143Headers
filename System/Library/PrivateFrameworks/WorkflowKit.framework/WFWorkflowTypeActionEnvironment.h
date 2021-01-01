/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment {

	NSString* _workflowType;

}

@property (nonatomic,readonly) NSString * workflowType;              //@synthesize workflowType=_workflowType - In the implementation block
-(BOOL)isAppExtension;
-(id)initWithWorkflowType:(id)arg1 ;
-(NSString *)workflowType;
-(BOOL)isWatchOS;
@end
