/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding> {

	NSString* _streamID;
	NSString* _ctag;

}

@property (nonatomic,retain) NSString * streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                  //@synthesize ctag=_ctag - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)subscribedStreamWithStreamID:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)streamID;
-(void)setStreamID:(NSString *)arg1 ;
-(id)initWithStreamID:(id)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
@end

