/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSDate, VCPFingerprint, NSString, NSURL;

@interface VCPAsset : NSObject

@property (nonatomic,readonly) BOOL isPano; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) BOOL isHDR; 
@property (nonatomic,readonly) BOOL isSDOF; 
@property (nonatomic,readonly) NSDictionary * exif; 
@property (nonatomic,readonly) BOOL hadFlash; 
@property (nonatomic,readonly) float exposureTimeSeconds; 
@property (nonatomic,readonly) float photoOffsetSeconds; 
@property (nonatomic,readonly) float originalPhotoOffsetSeconds; 
@property (nonatomic,readonly) BOOL isSlowmo; 
@property (nonatomic,readonly) BOOL isTimelapse; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float slowmoRate; 
@property (nonatomic,readonly) float timelapseRate; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) VCPFingerprint * fingerprint; 
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSURL * mainFileURL; 
@property (nonatomic,readonly) NSDictionary * scenes; 
+(void)unimplementedExceptionForMethodName:(id)arg1 ;
-(double)duration;
-(NSDate *)modificationDate;
-(NSDictionary *)scenes;
-(long long)mediaType;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(NSString *)localIdentifier;
-(id)movie;
-(VCPFingerprint *)fingerprint;
-(unsigned long long)mediaSubtypes;
-(BOOL)isImage;
-(NSURL *)mainFileURL;
-(BOOL)isHDR;
-(BOOL)isTimelapse;
-(id)typeDescription;
-(BOOL)isMovie;
-(BOOL)isPano;
-(BOOL)isLivePhoto;
-(BOOL)isScreenshot;
-(BOOL)isSDOF;
-(NSDictionary *)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(BOOL)hadFlash;
-(float)exposureTimeSeconds;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(BOOL)isSlowmo;
-(float)slowmoRate;
-(float)timelapseRate;
-(id)streamedMovie;
-(id)originalMovie;
-(CGSize)originalMovieSize;
@end

