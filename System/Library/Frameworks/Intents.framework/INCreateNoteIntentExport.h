/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString, INNoteContent;


@protocol INCreateNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) INNoteContent * content; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(id)init;
-(INNoteContent *)content;
-(INSpeakableString *)title;
-(void)setTitle:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setContent:(id)arg1;

@end

