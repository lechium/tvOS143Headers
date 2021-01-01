/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>

@protocol MKUserLocationHeadingIndicator;
@class CALayer, UIImage, VKNavigationPuck, _MKPuckAccuracyLayer, CLLocation, NSString;

@interface _MKPuckAnnotationView : MKAnnotationView <VKPuckAnimatorTarget> {

	CALayer* _puckLayer;
	BOOL _shouldHidePuckWhenAccuracyVisible;
	BOOL _shouldInnerPulse;
	BOOL _shouldShowOuterRing;
	BOOL _shouldShowDynamicLocationAnimations;
	UIImage* _innerImageMask;
	BOOL _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	double _accuracyRingAlpha;
	CALayer* _puckTransitionLayer;
	double _puckScale;
	CALayer* _innerCircleLayer;
	BOOL _isShowingStaleColor;
	BOOL _displaysPuckAsAccuracy;
	CALayer* _accuracyContainerLayer;
	CALayer* _headingContainerLayer;
	VKNavigationPuck* _navigationPuckMarker;
	long long _zoomDirection;
	CALayer* _pulseLayer;
	_MKPuckAccuracyLayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _canShowHeadingIndicator;
	BOOL _shouldDisplayHeading;
	BOOL _shouldDisplayInaccurateHeading;
	BOOL _forceHeadingUp;
	BOOL _hasValidHeading;
	double _mapRotation;
	double _heading;
	double _headingAccuracy;
	CALayer*<MKUserLocationHeadingIndicator> _headingLayer;
	BOOL _headingLayerTracksAccuracy;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	double _maxRadiusToShowAccuracyRing;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;
	BOOL _hasExplicitCollisionMode;
	BOOL _animatingPresentationAccuracy;
	double _presentationAccuracy;
	id _minAccuracyConfigListener;
	id _newPuckConfigListener;
	double _minimumAccuracyRadius;
	id _minUncertaintyConfigListener;
	double _minimumAccuracyUncertainty;
	BOOL _forcesConeIndicator;
	long long _headingIndicatorStyle;

}

@property (assign,nonatomic) BOOL shouldDisplayInaccurateHeading;                                                                                                               //@synthesize shouldDisplayInaccurateHeading=_shouldDisplayInaccurateHeading - In the implementation block
@property (assign,nonatomic) BOOL forcesConeIndicator;                                                                                                                          //@synthesize forcesConeIndicator=_forcesConeIndicator - In the implementation block
@property (assign,setter=_setMinimumAccuracyUncertainty:,getter=_minimumAccuracyUncertainty,nonatomic) double minimumAccuracyUncertainty; 
@property (assign,setter=_setForceHeadingUp:,getter=_forceHeadingUp,nonatomic) BOOL forceHeadingUp;                                                                             //@synthesize forceHeadingUp=_forceHeadingUp - In the implementation block
@property (assign,setter=_setShouldShowDynamicLocationAnimations:,getter=_shouldShowDynamicLocationAnimations,nonatomic) BOOL shouldShowDynamicLocationAnimations;              //@synthesize shouldShowDynamicLocationAnimations=_shouldShowDynamicLocationAnimations - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;                                                                                                       //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,setter=setStale:,getter=isStale,nonatomic) BOOL stale;                                                                                                        //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) long long zoomDirection;                                                                                                                           //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (assign,setter=_setDisplaysPuckAsAccuracy:,getter=_displaysPuckAsAccuracy,nonatomic) BOOL displaysPuckAsAccuracy;                                                     //@synthesize displaysPuckAsAccuracy=_displaysPuckAsAccuracy - In the implementation block
@property (assign,getter=isAnimatingPresentationAccuracy,nonatomic) BOOL animatingPresentationAccuracy;                                                                         //@synthesize animatingPresentationAccuracy=_animatingPresentationAccuracy - In the implementation block
@property (assign,nonatomic) double presentationAccuracy;                                                                                                                       //@synthesize presentationAccuracy=_presentationAccuracy - In the implementation block
@property (nonatomic,readonly) CLLocation * lastLocation;                                                                                                                       //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,setter=_setMinimumAccuracyRadius:,getter=_minimumAccuracyRadius,nonatomic) double minimumAccuracyRadius;                                                      //@synthesize minimumAccuracyRadius=_minimumAccuracyRadius - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                                                                                                         //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) BOOL canShowHeadingIndicator;                                                                                                                      //@synthesize canShowHeadingIndicator=_canShowHeadingIndicator - In the implementation block
@property (assign,nonatomic) double heading;                                                                                                                                    //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                                                                                                            //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                                                                                                         //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (getter=_locationAccuracyInScreenPoints,nonatomic,readonly) double locationAccuracyInScreenPoints; 
@property (assign,nonatomic) long long headingIndicatorStyle;                                                                                                                   //@synthesize headingIndicatorStyle=_headingIndicatorStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                                                                                                                  //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL shouldInnerPulse;                                                                                                                             //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (assign,nonatomic) BOOL shouldShowOuterRing;                                                                                                                          //@synthesize shouldShowOuterRing=_shouldShowOuterRing - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                                                                                                           //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) double maxRadiusToShowAccuracyRing;                                                                                                                //@synthesize maxRadiusToShowAccuracyRing=_maxRadiusToShowAccuracyRing - In the implementation block
@property (assign,setter=_setShouldHidePuckWhenAccuracyVisible:,getter=_shouldHidePuckWhenAccuracyVisible,nonatomic) BOOL shouldHidePuckWhenAccuracyVisible;                    //@synthesize shouldHidePuckWhenAccuracyVisible=_shouldHidePuckWhenAccuracyVisible - In the implementation block
@property (assign,nonatomic) double puckAlpha; 
@property (assign,nonatomic) double accuracyRingAlpha;                                                                                                                          //@synthesize accuracyRingAlpha=_accuracyRingAlpha - In the implementation block
@property (nonatomic,retain) UIImage * innerImageMask;                                                                                                                          //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) BOOL rotateInnerImageToMatchCourse;                                                                                                                //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
@property (assign,nonatomic) double presentationCourse;                                                                                                                         //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)baseDiameter;
+(CGPoint)_calloutOffset;
+(double)innerDiameter;
+(double)outerRingWidth;
-(void)dealloc;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(BOOL)_tracking;
-(double)heading;
-(double)headingAccuracy;
-(void)setHeading:(double)arg1 ;
-(CLLocation *)lastLocation;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHeadingAccuracy:(double)arg1 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_isSelectable;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(double)presentationAccuracy;
-(void)setPresentationAccuracy:(double)arg1 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setStale:(BOOL)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setMapDisplayStyle:(SCD_Struct_MK27)arg1 ;
-(void)setForcesConeIndicator:(BOOL)arg1 ;
-(void)_setForceHeadingUp:(BOOL)arg1 ;
-(void)setShouldDisplayInaccurateHeading:(BOOL)arg1 ;
-(float)_selectionPriority;
-(void)setZoomDirection:(long long)arg1 ;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)setDisplayPriority:(float)arg1 ;
-(id)_vkNavigationPuckMarker;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(void)setCollisionMode:(long long)arg1 ;
-(void)locationManagerFailedToUpdateLocation;
-(CGPoint)calloutOffset;
-(long long)collisionMode;
-(void)_setMapType:(unsigned long long)arg1 ;
-(CGRect)_significantBounds;
-(BOOL)_balloonCalloutShouldShowArrow;
-(UIEdgeInsets)_annotationTrackingInsets;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_updateFromMap;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_updateLegacyConfiguration;
-(void)_setMinimumAccuracyRadius:(double)arg1 ;
-(void)_setupLayers;
-(void)setShouldInnerPulse:(BOOL)arg1 ;
-(BOOL)shouldDisplayHeading;
-(void)_updatePulseColor;
-(void)_updateInnerImage;
-(id)_currentInnerColor;
-(id)_createFakePuckLayer;
-(void)_updateShowHeadingLayerAnimatedIfPossible:(BOOL)arg1 ;
-(void)_updateToReflectLocationAccuracyWithDuration:(double)arg1 allowShowHideAnimation:(BOOL)arg2 ;
-(void)_updateHeadingIndicators;
-(void)_updateInnerCourseRotation;
-(void)_updateBaseImage;
-(void)_updateAccuracyColors;
-(id)_effectiveTintColor;
-(void)_updatePulse;
-(void)_updatePulseAnimation;
-(void)_updateAccuracyAnimation;
-(void)_setHeadingLayerHidden:(BOOL)arg1 ;
-(void)_updateInnerMaskLayer;
-(BOOL)shouldShowOuterRing;
-(BOOL)isStale;
-(void)_resetInnerPulseFrame;
-(void)_updateLayers;
-(BOOL)_isLocationStale:(id)arg1 ;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)_updateShowHeadingLayer;
-(BOOL)_shouldPulseForLocation:(id)arg1 ;
-(BOOL)_hideLargeAccuracyRing;
-(double)_locationAccuracyInScreenPoints;
-(void)_updateAccuracyOpacityForRadius:(double)arg1 duration:(double)arg2 ;
-(void)_updatePuckVisibilityForRadius:(double)arg1 previousRadius:(double)arg2 duration:(double)arg3 ;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(id)_innerPulseAnimation;
-(unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1 ;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(void)_removePulse;
-(BOOL)isEffectsEnabled;
-(void)_pausePulse;
-(void)_resumePulse;
-(BOOL)_shouldShowAccuracyRing;
-(long long)_enforcedHeadingIndicatorStyle;
-(void)_updateHeadingLayerForStyleChange:(BOOL)arg1 ;
-(BOOL)forcesConeIndicator;
-(void)_updateShowHeadingLayer:(BOOL)arg1 animatedIfPossible:(BOOL)arg2 ;
-(id)_baseLayer;
-(void)setHeadingIndicatorStyle:(long long)arg1 ;
-(void)setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(void)_setDisplaysPuckAsAccuracy:(BOOL)arg1 ;
-(double)puckAlpha;
-(void)setPuckAlpha:(double)arg1 ;
-(void)setPuckScale:(double)arg1 ;
-(void)setShouldShowOuterRing:(BOOL)arg1 ;
-(void)setInnerImageMask:(UIImage *)arg1 ;
-(void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2 ;
-(double)_minimumAccuracyUncertainty;
-(void)_setMinimumAccuracyUncertainty:(double)arg1 ;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(void)setAccuracyRingAlpha:(double)arg1 ;
-(void)_setShouldHidePuckWhenAccuracyVisible:(BOOL)arg1 ;
-(void)setAnimatingPresentationAccuracy:(BOOL)arg1 ;
-(void)_setShouldShowDynamicLocationAnimations:(BOOL)arg1 ;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(void)setCanShowHeadingIndicator:(BOOL)arg1 ;
-(long long)zoomDirection;
-(BOOL)allowsPulse;
-(BOOL)canShowHeadingIndicator;
-(BOOL)shouldDisplayInaccurateHeading;
-(BOOL)allowsAccuracyRing;
-(double)maxRadiusToShowAccuracyRing;
-(double)locationAccuracy;
-(double)accuracyRingAlpha;
-(double)_minimumAccuracyRadius;
-(BOOL)_shouldShowDynamicLocationAnimations;
-(long long)headingIndicatorStyle;
-(BOOL)shouldInnerPulse;
-(UIImage *)innerImageMask;
-(BOOL)rotateInnerImageToMatchCourse;
-(BOOL)_forceHeadingUp;
-(BOOL)_shouldHidePuckWhenAccuracyVisible;
-(BOOL)isAnimatingPresentationAccuracy;
-(BOOL)_displaysPuckAsAccuracy;
@end

