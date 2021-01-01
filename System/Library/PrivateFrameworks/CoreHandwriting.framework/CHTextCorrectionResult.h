/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHTextInputTarget, CHTokenizedTextResult, NSError;

@interface CHTextCorrectionResult : NSObject <NSSecureCoding> {

	BOOL _characterLevel;
	CHTextInputTarget* _inputTarget;
	CHTokenizedTextResult* _textResult;
	long long _resultType;
	NSError* _error;
	NSRange _affectedRange;

}

@property (nonatomic,readonly) CHTextInputTarget * inputTarget;                          //@synthesize inputTarget=_inputTarget - In the implementation block
@property (nonatomic,readonly) NSRange affectedRange;                                    //@synthesize affectedRange=_affectedRange - In the implementation block
@property (nonatomic,readonly) CHTokenizedTextResult * textResult;                       //@synthesize textResult=_textResult - In the implementation block
@property (nonatomic,readonly) long long resultType;                                     //@synthesize resultType=_resultType - In the implementation block
@property (getter=isCharacterLevel,nonatomic,readonly) BOOL characterLevel;              //@synthesize characterLevel=_characterLevel - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(long long)resultType;
-(CHTokenizedTextResult *)textResult;
-(CHTextInputTarget *)inputTarget;
-(NSRange)affectedRange;
-(BOOL)isCharacterLevel;
-(id)initWithInputTarget:(id)arg1 affectedRange:(NSRange)arg2 textResult:(id)arg3 resultType:(long long)arg4 isCharacterLevel:(BOOL)arg5 error:(id)arg6 ;
-(BOOL)isEqualToTextCorrectionResult:(id)arg1 ;
@end

