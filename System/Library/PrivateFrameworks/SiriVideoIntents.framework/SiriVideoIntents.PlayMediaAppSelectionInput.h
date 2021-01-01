/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SiriVideoIntents.PlayMediaAppSelectionInput : _UKNOWN_SUPERCLASS_ <MLFeatureProvider> {

	 result_appUsageScore1Day;
	 result_appUsageScore7Days;
	 supports_general;
	 supports_audiobooks;
	 supports_podcasts;
	 result_nowPlayingUsage7Days;
	 result_foregroundAppIsLastUsed;
	 result_foregroundAppDuetElapsedSeconds;
	 result_clientCarConnected;
	 result_clientCarplay;
	 result_clientDaylight;
	 result_clientDevice;
	 result_clientHourOfDay;
	 result_clientIsActiveForegroundApp;
	 result_clientLocaleIdentifier;
	 result_clientLocaleLanguage;
	 result_clientLocked;
	 result_clientMotion;
	 result_clientNavigating;
	 result_clientWorkout;
	 result_entitySearchAllTimeInteractionShare;
	 result_entitySearchNormalizedSecondsSinceLastInteraction;
	 result_entitySearchTrailing10MinuteInteractionShare;
	 result_entitySearchTrailing1DayInteractionShare;
	 result_entitySearchTrailing1HourInteractionShare;
	 result_entitySearchTrailing28DayInteractionShare;
	 result_entitySearchTrailing2MinuteInteractionShare;
	 result_entitySearchTrailing6HourInteractionShare;
	 result_entitySearchTrailing7DayInteractionShare;
	 result_mediaNamePresent;
	 result_mediaType;
	 result_isNowPlayingDuetApp;
	 result_nowPlayingDuetElapsedSeconds;
	 result_nowPlayingState;
	 result_spotlightMatches;
	 result_libraryItems;
	 result_subscriptionStatus;
	 result_isNowPlayingApp;

}

@property (readonly,nonatomic) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

