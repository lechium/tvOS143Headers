/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFCloudKitTask.h>

@class NSOperationQueue, CKOperation, NSError;

@interface WFCloudKitItemTask : WFCloudKitTask {

	NSOperationQueue* _operationQueue;
	CKOperation* _cloudOperation;
	NSError* _error;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) CKOperation * cloudOperation;                   //@synthesize cloudOperation=_cloudOperation - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setCloudOperation:(CKOperation *)arg1 ;
-(CKOperation *)cloudOperation;
@end
