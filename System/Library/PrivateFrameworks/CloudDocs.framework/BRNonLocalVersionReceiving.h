/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BRNonLocalVersionReceiving <NSObject>
@required
-(oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
-(oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
-(oneway void)versionsDone;
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1;

@end

