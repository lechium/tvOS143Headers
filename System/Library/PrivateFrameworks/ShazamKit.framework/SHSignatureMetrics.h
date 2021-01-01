/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface SHSignatureMetrics : NSObject <NSSecureCoding, NSCopying> {

	NSString* _audioSource;
	NSDate* _sessionStartDate;

}

@property (nonatomic,copy) NSString * audioSource;                     //@synthesize audioSource=_audioSource - In the implementation block
@property (nonatomic,readonly) NSDate * sessionStartDate;              //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,readonly) double sessionDuration; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)sessionDuration;
-(NSString *)audioSource;
-(void)setAudioSource:(NSString *)arg1 ;
-(NSDate *)sessionStartDate;
-(id)initWithSessionStartDate:(id)arg1 ;
@end

