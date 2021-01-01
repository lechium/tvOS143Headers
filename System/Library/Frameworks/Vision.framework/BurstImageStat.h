/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class NSString, NSMutableArray;

@interface BurstImageStat : NSObject {

	float normalizedFocusScore;
	float normalizedSigma;
	float colorHistogram[1024];
	int numEntries;
	unsigned short aeMatrix[256];
	int dissimilarity;
	FastRegistration_Signatures* projectionSignature;
	SharpnessGridElement_t* sharpnessGrid;
	int gridWidth;
	int gridHeight;
	GridROI_t gridROI;
	GridROI_t smoothedROI;
	float maxSkewness;
	float roiSize;
	BOOL exclude;
	BOOL AEStable;
	BOOL AFStable;
	BOOL hasRegistrationData;
	BOOL emotionallyRejected;
	BOOL doLimitedSharpnessAndBlur;
	BOOL isGarbage;
	int orientation;
	int AEAverage;
	int AETarget;
	int temporalOrder;
	float avgHorzDiffY;
	float blurExtent;
	float imageScore;
	float actionScore;
	float registrationErrorX;
	float registrationErrorY;
	float registrationErrorIntegral;
	float actionClusteringScore;
	int numHWFaces;
	float tx;
	float ty;
	int _AEDelta;
	int _version;
	double timeReceived;
	double timestamp;
	NSString* _imageId;
	NSMutableArray* _faceStatArray;
	CGRect facesRoiRect;

}

@property (retain) NSString * imageId;                           //@synthesize imageId=_imageId - In the implementation block
@property (assign) int orientation; 
@property (retain) NSMutableArray * faceStatArray;               //@synthesize faceStatArray=_faceStatArray - In the implementation block
@property (assign) BOOL exclude; 
@property (assign) BOOL AEStable; 
@property (assign) int AEAverage; 
@property (assign) int AETarget; 
@property (assign) BOOL AFStable; 
@property (assign) int temporalOrder; 
@property (assign) float avgHorzDiffY; 
@property (assign) float blurExtent; 
@property (assign) float imageScore; 
@property (assign) float actionScore; 
@property (assign) double timeReceived; 
@property (assign) double timestamp; 
@property (assign) float maxSkewness; 
@property (assign) float registrationErrorX; 
@property (assign) float registrationErrorY; 
@property (assign) float registrationErrorIntegral; 
@property (assign) float actionClusteringScore; 
@property (assign) BOOL hasRegistrationData; 
@property (assign) CGRect facesRoiRect; 
@property (assign) int numHWFaces; 
@property (assign) BOOL emotionallyRejected; 
@property (assign) BOOL doLimitedSharpnessAndBlur; 
@property (assign) float tx; 
@property (assign) float ty; 
@property (assign) BOOL isGarbage; 
@property (assign) float roiSize; 
@property (assign) int AEDelta;                                  //@synthesize AEDelta=_AEDelta - In the implementation block
@property (assign) int version;                                  //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(int)version;
-(void)setVersion:(int)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(double)timestamp;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSMutableArray *)faceStatArray;
-(int)temporalOrder;
-(void)setFacesRoiRect:(CGRect)arg1 ;
-(void)setNumHWFaces:(int)arg1 ;
-(int)numHWFaces;
-(CGRect)facesRoiRect;
-(NSString *)imageId;
-(BOOL)isGarbage;
-(float)registrationErrorIntegral;
-(void)computeImageData:(CVBufferRef)arg1 faceIDCounts:(id)arg2 ;
-(int)AEAverage;
-(int)AETarget;
-(BOOL)AEStable;
-(BOOL)AFStable;
-(unsigned short*)aeMatrix;
-(void)setTemporalOrder:(int)arg1 ;
-(void)setTimeReceived:(double)arg1 ;
-(void)setEmotionallyRejected:(BOOL)arg1 ;
-(float)avgHorzDiffY;
-(float)blurExtent;
-(void)setImageScore:(float)arg1 ;
-(void)setActionScore:(float)arg1 ;
-(float)tx;
-(float)ty;
-(float)computeAEMatrixDifference:(id)arg1 ;
-(int)canRegister;
-(void)allocateMeanStdPingPongBuffers:(float*)arg1 :(float*)arg2 :(float*)arg3 :(float*)arg4 ;
-(void)assignMeanStdBuffers:(float*)arg1 ;
-(void)performRegistration:(id)arg1 deltaCol:(float*)arg2 deltaRow:(float*)arg3 ;
-(float)maxSkewness;
-(void)setMaxSkewness:(float)arg1 ;
-(void)setTx:(float)arg1 ;
-(void)setTy:(float)arg1 ;
-(float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2 ;
-(BOOL)doLimitedSharpnessAndBlur;
-(BOOL)hasRegistrationData;
-(void)collapseSharpnessGrid;
-(void)setIsGarbage:(BOOL)arg1 ;
-(void)flagAsGarbage;
-(float)roiSize;
-(float)registrationErrorX;
-(float)registrationErrorY;
-(float)computeScore:(float)arg1 ;
-(void)writeGridROI:(id)arg1 ;
-(float)actionScore;
-(float)imageScore;
-(BOOL)emotionallyRejected;
-(float)computeImageDistance:(id)arg1 ;
-(float)actionClusteringScore;
-(long long)compareImageOrder:(id)arg1 ;
-(GridROI_t)getSharpnessAndBlurLimits;
-(void)setAEDelta:(int)arg1 ;
-(void)setRegistrationErrorX:(float)arg1 ;
-(void)setRegistrationErrorY:(float)arg1 ;
-(void)setHasRegistrationData:(BOOL)arg1 ;
-(void)setRegistrationErrorIntegral:(float)arg1 ;
-(void)setActionClusteringScore:(float)arg1 ;
-(void)updateROI:(GridROI_t)arg1 ;
-(void)computeImageColorHistogram:(vImage_Buffer*)arg1 ;
-(void)computeImageSharpnessOnGrid:(vImage_Buffer*)arg1 ;
-(void)computeBlurStatsOnGrid:(vImage_Buffer*)arg1 ;
-(void)computeImageProjections:(vImage_Buffer*)arg1 ;
-(float)computeFacialFocusScoreSum;
-(float)computeRuleOfThreeDistance;
-(float)computeSmilePercentage;
-(int)setAEMatrix:(id)arg1 ;
-(void)computeAEMatrix:(CVBufferRef)arg1 ;
-(long long)compareImageStats:(id)arg1 ;
-(float*)colorHistogram;
-(void)setImageId:(NSString *)arg1 ;
-(void)setFaceStatArray:(NSMutableArray *)arg1 ;
-(BOOL)exclude;
-(void)setExclude:(BOOL)arg1 ;
-(void)setAEStable:(BOOL)arg1 ;
-(void)setAEAverage:(int)arg1 ;
-(void)setAETarget:(int)arg1 ;
-(void)setAFStable:(BOOL)arg1 ;
-(void)setAvgHorzDiffY:(float)arg1 ;
-(void)setBlurExtent:(float)arg1 ;
-(double)timeReceived;
-(void)setDoLimitedSharpnessAndBlur:(BOOL)arg1 ;
-(void)setRoiSize:(float)arg1 ;
-(int)AEDelta;
@end

