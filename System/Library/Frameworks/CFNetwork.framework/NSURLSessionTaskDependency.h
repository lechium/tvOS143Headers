/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject {

	NSURLSessionTaskDependencyDescription* _taskDependencyDescription;
	NSURLSessionTask* _parentTask;
	NSURLSessionTask* _mainDocumentTask;

}

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * taskDependencyDescription;              //@synthesize taskDependencyDescription=_taskDependencyDescription - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * parentTask;                                         //@synthesize parentTask=_parentTask - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * mainDocumentTask;                                   //@synthesize mainDocumentTask=_mainDocumentTask - In the implementation block
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSURLSessionTaskDependencyDescription *)taskDependencyDescription;
-(void)setTaskDependencyDescription:(NSURLSessionTaskDependencyDescription *)arg1 ;
-(NSURLSessionTask *)parentTask;
-(NSURLSessionTask *)mainDocumentTask;
@end

