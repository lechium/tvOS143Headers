/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Podcasts/Podcasts-Structs.h>
@interface MTSingletonHolder : NSObject {

	os_unfair_lock_s _lock;
	id _instance;

}

@property (nonatomic,retain) id instance;              //@synthesize instance=_instance - In the implementation block
-(id)instance;
-(void)setInstance:(id)arg1 ;
@end

