/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLDevice;
@class NSDictionary, NSURL;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowBackgroundGPUComputeSetting;
	BOOL _useWatchSPIForScribble;
	BOOL _allowLowPrecisionAccumulationOnGPU;
	BOOL _enableTestVectorMode;
	BOOL _usePreloadedKey;
	long long _computeUnits;
	id<MTLDevice> _preferredMetalDevice;
	NSDictionary* _parameters;
	NSURL* _rootModelURL;
	long long _profilingOptions;

}

@property (assign) BOOL allowBackgroundGPUComputeSetting;                     //@synthesize allowBackgroundGPUComputeSetting=_allowBackgroundGPUComputeSetting - In the implementation block
@property (assign,nonatomic) BOOL useWatchSPIForScribble;                     //@synthesize useWatchSPIForScribble=_useWatchSPIForScribble - In the implementation block
@property (assign,nonatomic) BOOL allowFloat16AccumulationOnGPU; 
@property (assign) BOOL allowLowPrecisionAccumulationOnGPU;                   //@synthesize allowLowPrecisionAccumulationOnGPU=_allowLowPrecisionAccumulationOnGPU - In the implementation block
@property (assign,nonatomic) BOOL allowBackgroundGPUCompute; 
@property (nonatomic,retain) id<MTLDevice> preferredMTLDevice; 
@property (nonatomic,retain) id<MTLDevice> preferredMetalDevice;              //@synthesize preferredMetalDevice=_preferredMetalDevice - In the implementation block
@property (assign,nonatomic) BOOL enableTestVectorMode;                       //@synthesize enableTestVectorMode=_enableTestVectorMode - In the implementation block
@property (retain) NSDictionary * parameters;                                 //@synthesize parameters=_parameters - In the implementation block
@property (retain) NSURL * rootModelURL;                                      //@synthesize rootModelURL=_rootModelURL - In the implementation block
@property (assign,nonatomic) long long profilingOptions;                      //@synthesize profilingOptions=_profilingOptions - In the implementation block
@property (assign,nonatomic) BOOL usePreloadedKey;                            //@synthesize usePreloadedKey=_usePreloadedKey - In the implementation block
@property (assign) long long computeUnits;                                    //@synthesize computeUnits=_computeUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)computeUnitsToString:(long long)arg1 ;
-(id)initWithComputeUnits:(long long)arg1 ;
-(BOOL)allowFloat16AccumulationOnGPU;
-(void)setAllowFloat16AccumulationOnGPU:(BOOL)arg1 ;
-(id<MTLDevice>)preferredMTLDevice;
-(void)setPreferredMTLDevice:(id<MTLDevice>)arg1 ;
-(BOOL)allowBackgroundGPUCompute;
-(void)setAllowBackgroundGPUCompute:(BOOL)arg1 ;
-(BOOL)isEqualToModelConfiguration:(id)arg1 ;
-(long long)computeUnits;
-(void)setComputeUnits:(long long)arg1 ;
-(BOOL)allowBackgroundGPUComputeSetting;
-(void)setAllowBackgroundGPUComputeSetting:(BOOL)arg1 ;
-(BOOL)useWatchSPIForScribble;
-(void)setUseWatchSPIForScribble:(BOOL)arg1 ;
-(BOOL)allowLowPrecisionAccumulationOnGPU;
-(void)setAllowLowPrecisionAccumulationOnGPU:(BOOL)arg1 ;
-(id<MTLDevice>)preferredMetalDevice;
-(void)setPreferredMetalDevice:(id<MTLDevice>)arg1 ;
-(BOOL)enableTestVectorMode;
-(void)setEnableTestVectorMode:(BOOL)arg1 ;
-(NSURL *)rootModelURL;
-(void)setRootModelURL:(NSURL *)arg1 ;
-(long long)profilingOptions;
-(void)setProfilingOptions:(long long)arg1 ;
-(BOOL)usePreloadedKey;
-(void)setUsePreloadedKey:(BOOL)arg1 ;
@end

