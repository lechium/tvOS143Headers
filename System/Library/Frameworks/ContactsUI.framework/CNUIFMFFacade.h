/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FMFSession;

@interface CNUIFMFFacade : NSObject {

	FMFSession* _fmfSession;

}

@property (nonatomic,readonly) FMFSession * fmfSession;              //@synthesize fmfSession=_fmfSession - In the implementation block
-(id)init;
-(id)initWithFMFSession:(id)arg1 ;
-(FMFSession *)fmfSession;
-(void)fetchFriendHandlesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

