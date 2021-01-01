/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/CannedVideoFrameFeeder.h>

@class NSArray, NSDictionary, VideoScaler, NSString;

@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder> {

	int _width;
	int _height;
	NSArray* _allResolutions;
	int _allFrameCount;
	double _allFrameRate;
	NSDictionary* _currentResolution;
	_sFILE* _currentInputFile;
	CVPixelBufferPoolRef _currentPixelBufferPool;
	CVPixelBufferPoolRef _rotatedPixelBufferPool;
	VideoScaler* _videoScaler;
	opaque_pthread_mutex_t _inputMutex;
	opaque_pthread_mutex_t _attributeMutex;

}

@property (assign,nonatomic) int width;                                     //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) int height;                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSArray * allResolutions;                      //@synthesize allResolutions=_allResolutions - In the implementation block
@property (assign,nonatomic) int allFrameCount;                             //@synthesize allFrameCount=_allFrameCount - In the implementation block
@property (assign,nonatomic) double allFrameRate;                           //@synthesize allFrameRate=_allFrameRate - In the implementation block
@property (nonatomic,retain) NSDictionary * currentResolution;              //@synthesize currentResolution=_currentResolution - In the implementation block
@property (nonatomic,retain) VideoScaler * videoScaler;                     //@synthesize videoScaler=_videoScaler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1 ;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2 ;
-(int)setWidth:(int)arg1 height:(int)arg2 ;
-(VideoScaler *)videoScaler;
-(void)setVideoScaler:(VideoScaler *)arg1 ;
-(int)allFrameCount;
-(void)setAllFrameCount:(int)arg1 ;
-(double)allFrameRate;
-(void)setAllFrameRate:(double)arg1 ;
-(int)initializeFrameResolutionArrayFromFolder:(id)arg1 ;
-(NSArray *)allResolutions;
-(void)setAllResolutions:(NSArray *)arg1 ;
-(NSDictionary *)currentResolution;
-(void)setCurrentResolution:(NSDictionary *)arg1 ;
@end

