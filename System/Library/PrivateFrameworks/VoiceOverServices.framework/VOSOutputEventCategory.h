/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface VOSOutputEventCategory : NSObject {

	NSArray* _outputEvents;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * outputEvents;                        //@synthesize outputEvents=_outputEvents - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)interaction;
+(id)system;
+(id)allCategories;
+(id)voiceOverFeedback;
+(id)appFeedback;
+(id)braille;
+(id)textEditing;
-(id)init;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)initWithOutputEvents:(id)arg1 localizedCategoryName:(id)arg2 ;
-(void)setOutputEvents:(NSArray *)arg1 ;
-(NSArray *)outputEvents;
-(BOOL)containsOutputEvent:(id)arg1 ;
@end

