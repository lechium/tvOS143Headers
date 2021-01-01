/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSDictionary, NSArray, NSString, AXMVisionFeatureColorInfo, AXMVisionFeatureAssetMetadata, AXMVisionFeatureFaceDetectionResult, NSMutableDictionary, AXMVisionFeatureAestheticsResult, NSObject;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding> {

	unsigned long long _featureType;
	NSArray* _subfeatures;
	NSString* _barcodeType;
	long long _ocrFeatureType;
	NSArray* _effectiveTextDetectionLocales;
	double _creationDate;
	CGRect _frame;
	CGRect _normalizedFrame;
	NSString* _value;
	BOOL _isValueSpeakable;
	AXMVisionFeatureColorInfo* _colorInfo;
	AXMVisionFeatureAssetMetadata* _assetMetadata;
	double _blur;
	double _brightness;
	double _confidence;
	BOOL _isLowConfidence;
	CGAffineTransform _horizonTransform;
	float _horizonAngle;
	AXMVisionFeatureFaceDetectionResult* _faceDetectionResult;
	unsigned long long _faceId;
	SCD_Struct_AX8 _facePose;
	CGSize _canvasSize;
	NSString* _modelID;
	NSString* _classificationLabel;
	NSString* _classificationLocalizedValue;
	NSString* _caption;
	NSMutableDictionary* _featureGates;
	BOOL _captionMayContainSensitiveContent;
	long long _uiClass;
	AXMVisionFeatureAestheticsResult* _aestheticsResult;
	long long _deviceOrientation;
	NSObject*<NSSecureCoding> _userContext;
	NSDictionary* _debugRectangles;
	CGRect _unpaddedDetectedFaceRect;

}

@property (nonatomic,retain) NSObject*<NSSecureCoding> userContext;                                    //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSDictionary * debugRectangles;                                           //@synthesize debugRectangles=_debugRectangles - In the implementation block
@property (nonatomic,readonly) unsigned long long featureType; 
@property (nonatomic,readonly) BOOL isBarcode; 
@property (nonatomic,readonly) BOOL isFace; 
@property (nonatomic,readonly) BOOL isRealtimeFace; 
@property (nonatomic,readonly) BOOL isPerson; 
@property (nonatomic,readonly) BOOL isSceneClassification; 
@property (nonatomic,readonly) BOOL isObjectClassification; 
@property (nonatomic,readonly) BOOL isNSFWClassification; 
@property (nonatomic,readonly) BOOL isSignificantEventClassification; 
@property (nonatomic,readonly) BOOL isBrightness; 
@property (nonatomic,readonly) BOOL isBlur; 
@property (nonatomic,readonly) BOOL isHorizon; 
@property (nonatomic,readonly) BOOL isColor; 
@property (nonatomic,readonly) BOOL isMediaLegibility; 
@property (nonatomic,readonly) BOOL isAssetMetadata; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) BOOL isModelClassification; 
@property (nonatomic,readonly) BOOL isCaption; 
@property (nonatomic,readonly) BOOL isMotion; 
@property (nonatomic,readonly) BOOL isCameraMetadata; 
@property (nonatomic,readonly) BOOL isProminentObject; 
@property (nonatomic,readonly) BOOL isIconClass; 
@property (nonatomic,readonly) BOOL isImageAesthetics; 
@property (nonatomic,readonly) BOOL isOCR; 
@property (nonatomic,readonly) BOOL isTextDocument; 
@property (nonatomic,readonly) BOOL isTextRegion; 
@property (nonatomic,readonly) BOOL isTextLine; 
@property (nonatomic,readonly) BOOL isTextSequence; 
@property (nonatomic,readonly) BOOL isTextCharacter; 
@property (nonatomic,readonly) BOOL isTextDiacritic; 
@property (nonatomic,readonly) NSArray * subfeatures; 
@property (nonatomic,readonly) double creationDate; 
@property (nonatomic,readonly) CGSize canvasSize; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect normalizedFrame; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) BOOL isLowConfidence; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isValueSpeakable; 
@property (nonatomic,readonly) NSString * classificationLabel; 
@property (nonatomic,readonly) NSString * classificationLocalizedValue; 
@property (nonatomic,readonly) long long uiClass;                                                      //@synthesize uiClass=_uiClass - In the implementation block
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * barcodeType; 
@property (nonatomic,readonly) long long ocrFeatureType; 
@property (nonatomic,readonly) AXMVisionFeatureColorInfo * colorInfo; 
@property (nonatomic,readonly) AXMVisionFeatureAssetMetadata * assetMetadata; 
@property (nonatomic,readonly) double blur; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) AXMVisionFeatureFaceDetectionResult * faceDetectionResult; 
@property (nonatomic,readonly) unsigned long long faceId; 
@property (nonatomic,readonly) CGRect unpaddedDetectedFaceRect;                                        //@synthesize unpaddedDetectedFaceRect=_unpaddedDetectedFaceRect - In the implementation block
@property (nonatomic,readonly) CGAffineTransform horizonTransform; 
@property (nonatomic,readonly) float horizonAngle; 
@property (nonatomic,readonly) AXMVisionFeatureAestheticsResult * aestheticsResult;                    //@synthesize aestheticsResult=_aestheticsResult - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;                                            //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * featureGates; 
@property (assign,nonatomic) BOOL captionMayContainSensitiveContent;                                   //@synthesize captionMayContainSensitiveContent=_captionMayContainSensitiveContent - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)groupedFeatureWithElementRect:(CGRect)arg1 uiClass:(long long)arg2 confidence:(double)arg3 label:(id)arg4 canvasSize:(CGSize)arg5 subElements:(id)arg6 ;
+(id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithFaceDetectionResult:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)featureWithImageAestheticsObservation:(id)arg1 ;
+(id)featureWithVisionRequest:(id)arg1 blurValue:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithMediaLegibility:(id)arg1 ;
+(id)nsfwClassificationWithCategory:(id)arg1 confidence:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)textSequence:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)textLineWithText:(id)arg1 boundingBox:(CGRect)arg2 sequences:(id)arg3 canvasSize:(CGSize)arg4 ;
+(id)textRegionWithText:(id)arg1 isSpeakable:(BOOL)arg2 boundingBox:(CGRect)arg3 lines:(id)arg4 canvasSize:(CGSize)arg5 ;
+(id)textDocumentWithText:(id)arg1 isSpeakable:(BOOL)arg2 boundingBox:(CGRect)arg3 regions:(id)arg4 canvasSize:(CGSize)arg5 ;
+(id)featureWithAssetMetadata:(id)arg1 ;
+(id)prominentObjectWithBoundingBox:(CGRect)arg1 canvasSize:(CGSize)arg2 confidence:(double)arg3 ;
+(CGRect)_aspectFaceRectFromSquareFaceRect:(CGRect)arg1 sizeInPixels:(CGSize)arg2 ;
+(id)nameForFeatureType:(unsigned long long)arg1 ;
+(long long)locationForNormalizedFrame:(CGRect)arg1 previousLocation:(long long)arg2 usingThirds:(BOOL)arg3 ;
+(void)_append:(id)arg1 toList:(id)arg2 ;
+(id)nameForLocation:(long long)arg1 ;
+(id)personWithBoundingBox:(CGRect)arg1 confidence:(double)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 brightnessValue:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)objectClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 boundingBox:(CGRect)arg3 confidence:(float)arg4 canvasSize:(CGSize)arg5 ;
+(id)sceneClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 confidence:(float)arg3 canvasSize:(CGSize)arg4 ;
+(id)significantEventClassificationWithCategory:(id)arg1 confidence:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithTaxonomyNode:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)featureWithCaptionResult:(id)arg1 confidence:(double)arg2 modelIdentifier:(id)arg3 canvasSize:(CGSize)arg4 isLowConfidence:(BOOL)arg5 ;
+(id)featureWithVisionRequest:(id)arg1 axElementRect:(CGRect)arg2 confidence:(double)arg3 uiClass:(long long)arg4 label:(id)arg5 canvasSize:(CGSize)arg6 ;
+(id)featureWithIconClass:(id)arg1 confidence:(double)arg2 ;
+(id)featureWithColorInfo:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)localizedStringForLocation:(long long)arg1 isSubjectImplicit:(BOOL)arg2 ;
+(id)nameForOCRType:(long long)arg1 ;
+(id)flattenedFeatureList:(id)arg1 ;
+(id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(CGSize)arg2 frame:(CGRect)arg3 value:(id)arg4 valueIsSpeakable:(BOOL)arg5 barcodeType:(id)arg6 ocrFeatureType:(long long)arg7 subFeatures:(id)arg8 ;
+(id)unitTestingFaceFeatureWithSize:(CGSize)arg1 faceFrame:(CGRect)arg2 ;
+(id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(CGSize)arg2 frame:(CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6 subFeatures:(id)arg7 ;
+(id)unitTestingTeatureWithType:(unsigned long long)arg1 axElementRect:(CGRect)arg2 confidence:(double)arg3 uiClass:(long long)arg4 label:(id)arg5 canvasSize:(CGSize)arg6 ;
+(id)unitTestingFeature;
+(id)unitTestingFaceFeature;
+(id)unitTestingProminentObjectFeature;
+(id)unitTestingHorizonFeature;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)value;
-(double)creationDate;
-(NSDictionary *)dictionaryRepresentation;
-(double)confidence;
-(CGRect)frame;
-(NSObject*<NSSecureCoding>)userContext;
-(double)brightness;
-(unsigned long long)faceId;
-(unsigned long long)featureType;
-(NSString *)caption;
-(CGSize)canvasSize;
-(double)blur;
-(long long)deviceOrientation;
-(BOOL)isLowConfidence;
-(AXMVisionFeatureAssetMetadata *)assetMetadata;
-(void)setUserContext:(NSObject*<NSSecureCoding>)arg1 ;
-(BOOL)isCaption;
-(NSArray *)subfeatures;
-(long long)uiClass;
-(NSString *)classificationLocalizedValue;
-(NSString *)classificationLabel;
-(AXMVisionFeatureFaceDetectionResult *)faceDetectionResult;
-(id)effectiveTextDetectionLocales;
-(void)addFeatureGate:(id)arg1 userInfo:(id)arg2 ;
-(CGRect)normalizedFrame;
-(BOOL)isTextDocument;
-(BOOL)isValueSpeakable;
-(NSDictionary *)featureGates;
-(BOOL)isFace;
-(BOOL)isSceneClassification;
-(BOOL)isObjectClassification;
-(BOOL)isNSFWClassification;
-(BOOL)isModelClassification;
-(BOOL)isOCR;
-(BOOL)isBlur;
-(BOOL)isBrightness;
-(BOOL)isIconClass;
-(BOOL)captionMayContainSensitiveContent;
-(void)setCaptionMayContainSensitiveContent:(BOOL)arg1 ;
-(void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2 ;
-(id)_nameForOCRFeatureType:(long long)arg1 ;
-(long long)locationUsingThirds:(BOOL)arg1 ;
-(NSString *)barcodeType;
-(long long)ocrFeatureType;
-(float)horizonAngle;
-(BOOL)isEqualToAXMVisionFeature:(id)arg1 ;
-(AXMVisionFeatureColorInfo *)colorInfo;
-(SCD_Struct_AX8)facePose;
-(CGAffineTransform)horizonTransform;
-(BOOL)isBarcode;
-(BOOL)isRealtimeFace;
-(BOOL)isPerson;
-(BOOL)isSignificantEventClassification;
-(BOOL)isColor;
-(BOOL)isHorizon;
-(BOOL)isMediaLegibility;
-(BOOL)isAssetMetadata;
-(BOOL)isRectangle;
-(BOOL)isTextRegion;
-(BOOL)isTextLine;
-(BOOL)isTextSequence;
-(BOOL)isTextCharacter;
-(BOOL)isTextDiacritic;
-(BOOL)isMotion;
-(BOOL)isCameraMetadata;
-(BOOL)isProminentObject;
-(BOOL)isImageAesthetics;
-(CGRect)unpaddedDetectedFaceRect;
-(AXMVisionFeatureAestheticsResult *)aestheticsResult;
-(NSDictionary *)debugRectangles;
-(void)setDebugRectangles:(NSDictionary *)arg1 ;
@end

