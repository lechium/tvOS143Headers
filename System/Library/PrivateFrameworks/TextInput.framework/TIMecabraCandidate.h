/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	BOOL _emojiCandidate;
	BOOL _extensionCandidate;
	BOOL _isForShortcutConversion;
	BOOL _isAutocorrection;
	BOOL _OTAWordListCandidate;
	BOOL _regionalCandidate;
	BOOL _responseKitCandidate;
	BOOL _bilingualCandidate;
	BOOL _asIsCandidate;
	BOOL _continuousPathConversion;
	BOOL _partialCandidate;
	BOOL _wubixingConvertedByPinyin;
	BOOL _prefixMatched;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned long long _deleteCount;
	long long _cursorMovement;
	NSString* _responseKitCategory;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;                                      //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
@property (assign,getter=isContinuousPathConversion,nonatomic) BOOL continuousPathConversion;              //@synthesize continuousPathConversion=_continuousPathConversion - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)input;
-(id)label;
-(id)candidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)responseKitCategory;
-(unsigned long long)deleteCount;
-(long long)cursorMovement;
-(BOOL)isForShortcutConversion;
-(BOOL)isAutocorrection;
-(BOOL)isContinuousPathConversion;
-(BOOL)isExtensionCandidate;
-(BOOL)isEmojiCandidate;
-(BOOL)isFullwidthCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isResponseKitCandidate;
-(BOOL)isBilingualCandidate;
-(BOOL)isPartialCandidate;
-(BOOL)isAsIsCandidate;
-(BOOL)isWubixingConvertedByPinyin;
-(BOOL)isPrefixMatched;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6 ;
-(NSNumber *)mecabraCandidatePointerValue;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(void)setContinuousPathConversion:(BOOL)arg1 ;
@end

