/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>

@class BKSHIDEventAuthenticationMessage, NSString;

@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSProtobufSerializable, NSCopying, BSDescriptionStreamable> {

	unsigned char _locus;
	unsigned _touchIdentifier;
	unsigned _userIdentifier;
	float _zGradient;
	long long _pathIndex;
	double _hitTestLocationX;
	double _hitTestLocationY;
	double _preciseLocationX;
	double _preciseLocationY;
	BKSHIDEventAuthenticationMessage* _authenticationMessage;

}

@property (assign,nonatomic) long long pathIndex;                                                   //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned touchIdentifier;                                              //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) unsigned userIdentifier;                                               //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char locus;                                                   //@synthesize locus=_locus - In the implementation block
@property (assign,nonatomic) float zGradient;                                                       //@synthesize zGradient=_zGradient - In the implementation block
@property (assign,nonatomic) double hitTestLocationX;                                               //@synthesize hitTestLocationX=_hitTestLocationX - In the implementation block
@property (assign,nonatomic) double hitTestLocationY;                                               //@synthesize hitTestLocationY=_hitTestLocationY - In the implementation block
@property (assign,nonatomic) double preciseLocationX;                                               //@synthesize preciseLocationX=_preciseLocationX - In the implementation block
@property (assign,nonatomic) double preciseLocationY;                                               //@synthesize preciseLocationY=_preciseLocationY - In the implementation block
@property (nonatomic,retain) BKSHIDEventAuthenticationMessage * authenticationMessage;              //@synthesize authenticationMessage=_authenticationMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned)userIdentifier;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(unsigned)touchIdentifier;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(BKSHIDEventAuthenticationMessage *)authenticationMessage;
-(void)setAuthenticationMessage:(BKSHIDEventAuthenticationMessage *)arg1 ;
-(long long)pathIndex;
-(void)setPathIndex:(long long)arg1 ;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(unsigned char)locus;
-(void)setLocus:(unsigned char)arg1 ;
-(float)zGradient;
-(void)setZGradient:(float)arg1 ;
-(double)hitTestLocationX;
-(void)setHitTestLocationX:(double)arg1 ;
-(double)hitTestLocationY;
-(void)setHitTestLocationY:(double)arg1 ;
-(double)preciseLocationX;
-(void)setPreciseLocationX:(double)arg1 ;
-(double)preciseLocationY;
-(void)setPreciseLocationY:(double)arg1 ;
@end

