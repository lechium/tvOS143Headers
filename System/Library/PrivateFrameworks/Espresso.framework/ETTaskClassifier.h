/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask {

	NSArray* _class_names;

}

@property (assign) NSArray * class_names;              //@synthesize class_names=_class_names - In the implementation block
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4 ;
-(NSArray *)class_names;
-(void)setClass_names:(NSArray *)arg1 ;
@end

