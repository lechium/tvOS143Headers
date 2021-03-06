/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction {

	NSArray* _inputContentClasses;
	NSArray* _fileTypes;

}

@property (nonatomic,readonly) NSArray * fileTypes;              //@synthesize fileTypes=_fileTypes - In the implementation block
-(id)name;
-(id)identifier;
-(id)descriptionDictionary;
-(id)inputContentClasses;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(NSArray *)fileTypes;
-(id)fileTypeForOpeningItem:(id)arg1 ;
@end

