/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INCreateNoteIntentExport.h>

@class INSpeakableString, INNoteContent, NSString;

@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * title; 
@property (nonatomic,copy,readonly) INNoteContent * content; 
@property (nonatomic,copy,readonly) INSpeakableString * groupName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(INNoteContent *)content;
-(id)_metadata;
-(INSpeakableString *)title;
-(void)setTitle:(INSpeakableString *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(INSpeakableString *)groupName;
-(void)setGroupName:(INSpeakableString *)arg1 ;
-(void)setContent:(INNoteContent *)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 groupName:(id)arg3 ;
@end

