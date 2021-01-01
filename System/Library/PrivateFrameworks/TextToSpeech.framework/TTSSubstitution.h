/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSUUID;

@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying> {

	BOOL _active;
	BOOL _ignoreCase;
	BOOL _appliesToAllApps;
	BOOL _isReplacementTextAllPunctuation;
	BOOL _isReplacementTextSurroundedByPunctuation;
	BOOL _isUserSubstitution;
	NSString* _originalString;
	NSString* _replacementString;
	NSString* _phonemes;
	NSSet* _languages;
	NSSet* _voiceIds;
	NSUUID* _uuid;
	NSSet* _bundleIdentifiers;
	NSRange _replacementRange;

}

@property (nonatomic,retain) NSUUID * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * originalString;                                      //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,copy) NSString * replacementString;                                   //@synthesize replacementString=_replacementString - In the implementation block
@property (nonatomic,copy) NSString * phonemes;                                            //@synthesize phonemes=_phonemes - In the implementation block
@property (nonatomic,copy) NSSet * languages;                                              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSSet * voiceIds;                                               //@synthesize voiceIds=_voiceIds - In the implementation block
@property (assign,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL ignoreCase;                                              //@synthesize ignoreCase=_ignoreCase - In the implementation block
@property (assign,nonatomic) NSRange replacementRange;                                     //@synthesize replacementRange=_replacementRange - In the implementation block
@property (assign,nonatomic) BOOL appliesToAllApps;                                        //@synthesize appliesToAllApps=_appliesToAllApps - In the implementation block
@property (nonatomic,copy) NSSet * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextAllPunctuation;                       //@synthesize isReplacementTextAllPunctuation=_isReplacementTextAllPunctuation - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextSurroundedByPunctuation;              //@synthesize isReplacementTextSurroundedByPunctuation=_isReplacementTextSurroundedByPunctuation - In the implementation block
@property (assign,nonatomic) BOOL isUserSubstitution;                                      //@synthesize isUserSubstitution=_isUserSubstitution - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)replacementString;
-(NSUUID *)uuid;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSSet *)languages;
-(void)setLanguages:(NSSet *)arg1 ;
-(NSRange)replacementRange;
-(void)setBundleIdentifiers:(NSSet *)arg1 ;
-(NSSet *)bundleIdentifiers;
-(NSString *)originalString;
-(void)setIgnoreCase:(BOOL)arg1 ;
-(void)setAppliesToAllApps:(BOOL)arg1 ;
-(void)setOriginalString:(NSString *)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(void)setPhonemes:(NSString *)arg1 ;
-(void)setVoiceIds:(NSSet *)arg1 ;
-(void)setReplacementRange:(NSRange)arg1 ;
-(NSString *)phonemes;
-(NSSet *)voiceIds;
-(BOOL)ignoreCase;
-(BOOL)appliesToAllApps;
-(BOOL)isReplacementTextAllPunctuation;
-(BOOL)isReplacementTextSurroundedByPunctuation;
-(BOOL)isUserSubstitution;
-(void)setIsUserSubstitution:(BOOL)arg1 ;
@end
