/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding> {

	double _clipDuration;
	NSDictionary* _videoCompressionProperties;

}

@property (assign,nonatomic) double clipDuration;                                    //@synthesize clipDuration=_clipDuration - In the implementation block
@property (nonatomic,retain) NSDictionary * videoCompressionProperties;              //@synthesize videoCompressionProperties=_videoCompressionProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)clipDuration;
-(void)setClipDuration:(double)arg1 ;
-(NSDictionary *)videoCompressionProperties;
-(void)setVideoCompressionProperties:(NSDictionary *)arg1 ;
@end

