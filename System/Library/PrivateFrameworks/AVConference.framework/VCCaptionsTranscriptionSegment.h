/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VCCaptionsTranscriptionSegment : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	NSString* _text;
	NSRange _range;
	unsigned _confidence;

}

@property (nonatomic,readonly) unsigned confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSRange range;                    //@synthesize range=_range - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(unsigned)confidence;
-(NSString *)text;
-(id)initWithConfidence:(unsigned)arg1 text:(id)arg2 range:(NSRange)arg3 ;
@end

