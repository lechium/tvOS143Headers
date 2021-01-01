/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString, NSLock;

@interface MPLayerInternal : NSObject {

	double numberOfLoops;
	double opacity;
	CGPoint position;
	double zPosition;
	CGSize size;
	double rotationAngle;
	double xRotationAngle;
	double yRotationAngle;
	double scale;
	double timeIn;
	double duration;
	double phaseInDuration;
	double phaseOutDuration;
	NSString* title;
	BOOL isTriggered;
	BOOL startsPaused;
	BOOL isAudioLayer;
	long long audioPriority;
	double durationPadding;
	NSString* layerID;
	long long zIndex;
	NSString* uuid;
	NSLock* containerLock;
	BOOL cleaningUp;

}

@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotationAngle; 
@property (assign,nonatomic) double xRotationAngle; 
@property (assign,nonatomic) double yRotationAngle; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) BOOL isTriggered; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) BOOL isAudioLayer; 
@property (assign,nonatomic) long long audioPriority; 
@property (assign,nonatomic) double durationPadding; 
@property (assign,nonatomic) long long zIndex; 
@property (nonatomic,retain) NSString * layerID; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSLock * containerLock; 
@property (assign,nonatomic) BOOL cleaningUp; 
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(CGPoint)position;
-(double)duration;
-(void)setPosition:(CGPoint)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(double)opacity;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(long long)audioPriority;
-(void)setAudioPriority:(long long)arg1 ;
-(NSString *)layerID;
-(void)setLayerID:(NSString *)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(BOOL)isAudioLayer;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setIsAudioLayer:(BOOL)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(void)setContainerLock:(NSLock *)arg1 ;
-(NSLock *)containerLock;
-(void)setCleaningUp:(BOOL)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(double)durationPadding;
-(BOOL)cleaningUp;
@end

