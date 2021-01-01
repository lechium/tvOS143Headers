/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSRestrictions.h>

@protocol IKJSRestrictions <JSExport>
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsMusicVideos; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@required
-(id)maxMovieRatingForCountry:(id)arg1;
-(id)maxTVShowRatingForCountry:(id)arg1;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsMusicVideos;
-(BOOL)allowsErotica;

@end

#import <libobjc.A.dylib/_IKJSRestrictionsProxy.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsMusicVideos; 
@property (nonatomic,readonly) BOOL allowsErotica; 
+(id)restrictionsDidChangeNotificationName;
-(id)maxMovieRatingForCountry:(id)arg1 ;
-(id)maxTVShowRatingForCountry:(id)arg1 ;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsMusicVideos;
-(BOOL)allowsErotica;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(id)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)appAnalyticsAllowed;
-(BOOL)allowsITunes;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;
-(id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3 ;
-(id)_contentRestrictionsCountryCode;
-(id)asPrivateIKJSRestrictions;
@end
