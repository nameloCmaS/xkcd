//
//  Comic.h
//  xkcd
//
//  Created by Joshua Bleecher Snyder on 9/1/09.
//  Copyright 2009 Treeline Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIImage+EXIFCompensation.h"

#define kMinComicNumber 1

@interface Comic : NSManagedObject

+ (Comic *)comic; // use this, not init/etc.

+ (void)deleteAllComics; // for total recreation from scratch
+ (NSArray *)allComics; // use sparingly!!
+ (NSArray *)comicsWithoutImages;

+ (Comic *)lastKnownComic; // highest numbered comic that has been fetched

+ (Comic *)comicNumbered:(NSInteger)comicNumber;

- (void)saveImageData:(NSData *)imageData;
- (BOOL)downloaded;
+ (NSEntityDescription *)entityDescription;
- (void)deleteImage;
- (NSString *)websiteURL;
+ (void)synchronizeDownloadedImages;
+ (NSSet *)downloadedImages;
+ (void)deleteDownloadedImage:(NSString *)downloadedImage; // strings drawn from +downloadedImages
+ (NSString *)imagePathForImageFilename:(NSString *)imageFilename;

<<<<<<< HEAD
@property(nonatomic, strong, readonly) UIImage *image;
@property(nonatomic, strong, readwrite) NSNumber *loading;
@property(nonatomic, strong, readwrite) NSString *imageURL;
@property(nonatomic, strong, readwrite) NSString *name;
@property(nonatomic, strong, readwrite) NSString *titleText;
@property(nonatomic, strong, readwrite) NSString *transcript;
@property(nonatomic, strong, readwrite) NSNumber *number;
@property(nonatomic, strong, readwrite) NSString *explanation;
=======
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) NSNumber *loading;
@property (nonatomic) NSString *imageURL;
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *titleText;
@property (nonatomic) NSString *transcript;
@property (nonatomic) NSNumber *number;
>>>>>>> master

@end
