/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INHomeUserTask, NSArray, INDateComponentsRange;


@protocol INControlHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INHomeUserTask * userTask; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@property (nonatomic,copy) NSArray * contents; 
@required
-(id)init;
-(NSArray *)contents;
-(INDateComponentsRange *)time;
-(void)setTime:(id)arg1;
-(void)setContents:(id)arg1;
-(NSArray *)filters;
-(void)setFilters:(id)arg1;
-(INHomeUserTask *)userTask;
-(void)setUserTask:(id)arg1;

@end

