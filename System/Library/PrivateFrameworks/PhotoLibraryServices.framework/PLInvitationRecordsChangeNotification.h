/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {

	BOOL _invitationRecordsDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLGenericAlbum * album; 
@property (nonatomic,readonly) BOOL invitationRecordsDidChange; 
+(id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 ;
-(id)name;
-(id)userInfo;
-(PLGenericAlbum *)album;
-(void)_calculateDiffs;
-(BOOL)invitationRecordsDidChange;
@end

