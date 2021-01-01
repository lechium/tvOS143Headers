/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFWorkflowIcon, NSData;

@interface WFHomeScreenIcon : NSObject {

	WFWorkflowIcon* _workflowIcon;
	NSData* _customImageData;

}

@property (nonatomic,readonly) WFWorkflowIcon * workflowIcon;              //@synthesize workflowIcon=_workflowIcon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                   //@synthesize customImageData=_customImageData - In the implementation block
-(WFWorkflowIcon *)workflowIcon;
-(id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2 ;
-(NSData *)customImageData;
@end
