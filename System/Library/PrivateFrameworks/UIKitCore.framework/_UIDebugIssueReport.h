/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDebugIssueReporting.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {

	NSMutableArray* _mutableIssues;

}

@property (nonatomic,copy,readonly) NSArray * issues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addIssue:(id)arg1 ;
-(NSArray *)issues;
@end

