/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/ASCViewModel.h>

@protocol ASCOffer;
@class ASCAdamID, ASCViewMetrics, NSString, ASCArtwork, NSArray, NSSet, ASCScreenshots, ASCTrailers;

@interface ASCLockup : NSObject <NSSecureCoding, NSCopying, ASCViewModel> {

	ASCAdamID* _id;
	NSString* _kind;
	ASCViewMetrics* _metrics;
	ASCArtwork* _icon;
	NSString* _heading;
	NSString* _title;
	NSString* _subtitle;
	NSString* _ageRating;
	id<ASCOffer> _offer;
	NSArray* _features;

}

@property (nonatomic,copy,readonly) NSSet * signpostTags; 
@property (nonatomic,readonly) BOOL isEditorsChoice; 
@property (nonatomic,readonly) float productRating; 
@property (nonatomic,copy,readonly) NSString * productRatingBadge; 
@property (nonatomic,copy,readonly) NSString * productDescription; 
@property (nonatomic,copy,readonly) ASCScreenshots * screenshots; 
@property (nonatomic,copy,readonly) ASCTrailers * trailers; 
@property (nonatomic,readonly) BOOL hasMedia; 
@property (nonatomic,copy,readonly) NSArray * features;                         //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                             //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                            //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) ASCViewMetrics * metrics;                   //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy,readonly) ASCArtwork * icon;                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * heading;                         //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ageRating;                       //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,copy,readonly) id<ASCOffer> offer;                         //@synthesize offer=_offer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)kind;
-(ASCArtwork *)icon;
-(NSString *)subtitle;
-(NSArray *)features;
-(ASCViewMetrics *)metrics;
-(NSString *)heading;
-(ASCAdamID *)id;
-(id<ASCOffer>)offer;
-(BOOL)hasMedia;
-(ASCTrailers *)trailers;
-(id)initWithID:(id)arg1 kind:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8 ;
-(ASCScreenshots *)screenshots;
-(NSSet *)signpostTags;
-(NSString *)ageRating;
-(id)featureWithClass:(Class)arg1 ;
-(id)lockupByAddingFeature:(id)arg1 ;
-(id)lockupWithSignpostTags:(id)arg1 ;
-(id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 features:(id)arg10 ;
-(id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 ;
-(id)lockupWithOffer:(id)arg1 ;
-(BOOL)isEditorsChoice;
-(float)productRating;
-(NSString *)productRatingBadge;
-(NSString *)productDescription;
@end

