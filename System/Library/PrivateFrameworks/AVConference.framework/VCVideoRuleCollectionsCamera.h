/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {

	BOOL _encodeHighDef;
	BOOL _decodeHighDef;

}
+(id)sharedInstance;
-(double)preferredAspectRatio;
-(BOOL)useSoftFramerateSwitching;
-(BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(BOOL)setupH264CellularRules;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 is1080:(BOOL)arg3 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 ;
-(BOOL)isHiDefCapable;
-(VCBitrateConfiguration*)bitrateConfiguration;
@end

