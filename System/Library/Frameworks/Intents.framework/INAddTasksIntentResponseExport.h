/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INTaskList, NSArray;


@protocol INAddTasksIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTaskList * modifiedTaskList; 
@property (nonatomic,copy) NSArray * addedTasks; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(INTaskList *)modifiedTaskList;
-(void)setModifiedTaskList:(id)arg1;
-(NSArray *)addedTasks;
-(void)setAddedTasks:(id)arg1;
-(unsigned long long)warnings;
-(void)setWarnings:(unsigned long long)arg1;

@end
